# -*- Mode: Python; coding: utf-8; indent-tabs-mode: nil; tab-width: 4 -*-
# Copyright 2012 Canonical
#
# This program is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License version 3, as published
# by the Free Software Foundation.

"""Ubuntu UI Toolkit autopilot tests."""

from os import remove
import os.path
from tempfile import mktemp

from autopilot.matchers import Eventually
from testtools.matchers import Is, Not, Equals
from autopilot.introspection.qt import QtIntrospectionTestMixin
from autopilot.testcase import AutopilotTestCase


def get_module_include_path():
    return os.path.abspath(
        os.path.join(
            os.path.dirname(__file__),
            '..',
            '..',
            '..',
            '..',
            'modules')
        )


class UbuntuUiToolkitTestCase(AutopilotTestCase, QtIntrospectionTestMixin):

    """A common test case class that provides several useful methods for SDK tests."""

    def setUp(self):
        super(UbuntuUiToolkitTestCase, self).setUp()
        self.launch_test_qml()

    def launch_test_qml(self):
        # If the test class has defined a 'test_qml' class attribute then we
        # write it to disk and launch it inside the Qml Viewer. If not, then we
        # silently do nothing (presumably the test has something else planned).
        if hasattr(self, 'test_qml') and isinstance(self.test_qml, basestring):
            qml_path = mktemp(suffix='.qml')
            open(qml_path, 'w').write(self.test_qml)
            self.addCleanup(remove, qml_path)

            self.app = self.launch_test_application(
                "qmlscene",
                "-I", get_module_include_path(),
                qml_path)

        if hasattr(self, 'test_qml_file') and isinstance(self.test_qml_file, basestring):
            qml_path = self.test_qml_file
            self.app = self.launch_test_application(
                "qmlscene",
                "-I", get_module_include_path(),
                qml_path)

    def checkListItem(self, itemText):
        item = self.app.select_single('Standard',text=itemText)
        self.assertThat(item, Not(Is(None)));

    def getListItem(self, itemText):
        return self.app.select_single('Standard',text=itemText)

    def getWidgetLoaderAndListView(self):
        widgetLoader = self.app.select_single(objectName="widgetLoader")
        listView = self.app.select_single(objectName="widgetList")
        self.assertThat(listView, Not(Is(None)));
        self.assertThat(listView.visible, Eventually(Equals(True)));
        return (widgetLoader, listView)

    def loadItem(self, item):
        widgetLoader = self.app.select_single(objectName="widgetLoader")
        self.selectItem(item)
        self.assertThat(widgetLoader.progress,Eventually(Equals(1.0)))
        loadedPage = self.app.select_single(objectName=item)
        self.assertThat(loadedPage, Not(Is(None)));
        self.assertThat(loadedPage.visible, Eventually(Equals(True)));  

    def drag(self, itemText, itemTextTo):
        item = self.getListItem(itemText)
        itemTo = self.getListItem(itemTextTo)

        self.mouse.move_to_object(item)
        self.mouse.press()
        self.mouse.move_to_object(itemTo)
        self.mouse.release()

    def selectItem(self, itemText):
        item = self.getListItem(itemText)
        self.assertThat(item.selected, Eventually(Equals(False)))

        self.mouse.move_to_object(item)
        self.mouse.click()

        self.assertThat(item.selected, Eventually(Equals(True)))

