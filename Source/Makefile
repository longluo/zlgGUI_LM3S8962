#******************************************************************************
#
# Makefile - Rules for building the zlgGUI Application using zlgGUI.
#
#
#******************************************************************************

#
# Defines the part type that this project uses.
#
PART=LM3S8962

#
# The base directory for project.
#
ROOT=.

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
# The default rule, which causes the zlgGUI Application using ZLG_GUI to be built.
#
all: ${COMPILER}
all: ${COMPILER}/zlggui.axf

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
${COMPILER}/zlggui.axf: ${COMPILER}/main.o
${COMPILER}/zlggui.axf: ${COMPILER}/lcmdrv.o
${COMPILER}/zlggui.axf: ${COMPILER}/rit128x96x4.o
${COMPILER}/zlggui.axf: ${COMPILER}/ConvertColor.o
${COMPILER}/zlggui.axf: ${COMPILER}/FONT5_7.o
${COMPILER}/zlggui.axf: ${COMPILER}/FONT8_8.o
${COMPILER}/zlggui.axf: ${COMPILER}/FONT24_32.o
${COMPILER}/zlggui.axf: ${COMPILER}/GUI_BASIC.o
${COMPILER}/zlggui.axf: ${COMPILER}/GUI_StockC.o
${COMPILER}/zlggui.axf: ${COMPILER}/loadbit.o
${COMPILER}/zlggui.axf: ${COMPILER}/menu.o
${COMPILER}/zlggui.axf: ${COMPILER}/spline.o
${COMPILER}/zlggui.axf: ${COMPILER}/windows.o
${COMPILER}/zlggui.axf: ${COMPILER}/startup_${COMPILER}.o
${COMPILER}/zlggui.axf: ${ROOT}/LM3S_Lib/DriverLib/libdriver.a
${COMPILER}/zlggui.axf: zlggui.ld
SCATTERgcc_zlggui=zlggui.ld
ENTRY_zlggui=ResetISR

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif

