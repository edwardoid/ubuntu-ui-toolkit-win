uri = Ubuntu.Components
installPath = $$[QT_INSTALL_QML]/$$replace(uri, \\., /)

# Components
QML_FILES = $$system(ls *.qml)
JS_FILES = $$system(ls *.js)

# Components/artwork
ARTWORK_FILES = $$system(find artwork -type f)

# Components/Listitems
LISTITEMS_FILES = $$system(find ListItems -maxdepth 1 -type f)
LISTITEMS_ARTWORK_FILES = $$system(find ListItems/artwork -type f)

# Components/Popups
POPUPS_FILES = $$system(find Popups -maxdepth 1 -type f)

# qmldir
QMLDIR_FILE = qmldir

# make found deployables visible in Qt Creator
OTHER_FILES += $$QML_FILES $$JS_FILES $$ARTWORK_FILES $$LISTITEMS_FILES $$POPUPS_FILES $$QMLDIR_FILE $$LISTITEMS_ARTWORK_FILES

# define deployment for found deployables
qmldir_file.path = $$installPath
qmldir_file.files = $$QMLDIR_FILE
qml_files.path = $$installPath
qml_files.files = $$QML_FILES
js_files.path = $$installPath
js_files.files = $$JS_FILES
artwork_files.path = $$installPath/artwork
artwork_files.files = $$ARTWORK_FILES
listitems_files.path = $$installPath/ListItems
listitems_files.files = $$LISTITEMS_FILES
listitems_artwork_files.path = $$installPath/ListItems/artwork
listitems_artwork_files.files = $$LISTITEMS_ARTWORK_FILES
popups_files.path = $$installPath/Popups
popups_files.files = $$POPUPS_FILES

plugins_qmltypes.path = $$installPath
plugins_qmltypes.files = plugins.qmltypes
plugins_qmltypes.extra = $$[QT_INSTALL_BINS]/qmlplugindump -notrelocatable Ubuntu.Components 0.1 ../../ > $(INSTALL_ROOT)/$$installPath/plugins.qmltypes
INSTALLS += qmldir_file qml_files js_files artwork_files listitems_files listitems_artwork_files popups_files plugins_qmltypes
