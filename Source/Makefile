#******************************************************************************
#
# Makefile - Rules for building the zlgGUI Application using zlgGUI.
#
#******************************************************************************

#
# Defines the part type that this project uses.
#
PART=LM3S8962

#
# The base directory for the project.
#
ROOT=../

#
# Include the common make definitions.
#
include ${ROOT}/makedefs

#
# Where to find source files that do not live in this directory.
#
VPATH=./App
VPATH+=./HAL
VPATH+=./HAL/Oled/Src
VPATH+=./ZLG_GUI

#
# Where to find header files that do not live in the source directory.
#
IPATH=.
IPATH+=./App
IPATH+=./HAL/Oled/Head
IPATH+=./LM3S_Lib/inc
IPATH+=./ZLG_GUI

#
# The default rule, which causes the Ethernet I/O Control Application using lwIP 1.3.2 to be built.
#
all: ${COMPILER}
all: ${COMPILER}/zlgGUI.axf

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${COMPILER} ${wildcard *~}

#
# The rule to create the target directory.
#
${COMPILER}:
	@mkdir ${COMPILER}

#
# Rules for building the zlgGUI Application using ZLG_GUI.
#
${COMPILER}/zlgGUI.axf: ${COMPILER}/main.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/lcmdrv.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/rit128x96x4.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/ConvertColor.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/GUI_BASIC.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/GUI_StockC.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/loadbit.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/menu.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/spline.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/menu.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/windows.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/font5_7.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/FONT8_8.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/FONT24_32.o
${COMPILER}/zlgGUI.axf: ${COMPILER}/startup_${COMPILER}.o
${COMPILER}/zlgGUI.axf: ${ROOT}/Source/LM3S_Lib/DriverLib/libdriver.a
${COMPILER}/zlgGUI.axf: zlgGUI_LM3S8962.ld
SCATTERgcc_zlgGUI=zlgGUI_LM3S8962.ld
ENTRY_zlgGUI=ResetISR

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif

