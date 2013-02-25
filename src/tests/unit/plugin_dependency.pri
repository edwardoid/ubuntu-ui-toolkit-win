COMPONENTS_PATH = ../../../modules/Ubuntu/Components
INCLUDEPATH += $$COMPONENTS_PATH/plugin

CONFIG(debug) {
    PRE_TARGETDEPS = $(OUT_DIR)\UbuntuComponentsd.dll
    LIBS += $(OUT_DIR)\UbuntuComponentsd.dll
}
CONFIG(release) {
    PRE_TARGETDEPS = $(OUT_DIR)\UbuntuComponents.dll
    LIBS += $(OUT_DIR)\UbuntuComponents.dll
}
DEFINES += QUICK_TEST_SOURCE_DIR=\"\\\"$$_PRO_FILE_PWD_\\\"\"

components.target = $$PRE_TARGETDEPS
components.commands = cd $$COMPONENTS_PATH/plugin && $(QMAKE) && make
QMAKE_EXTRA_TARGETS += components

