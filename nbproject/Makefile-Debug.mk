#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/main.o \
	${OBJECTDIR}/src/distance.o \
	${OBJECTDIR}/src/tour.o \
	${OBJECTDIR}/src/town.o \
	${OBJECTDIR}/src/util.o \
	${OBJECTDIR}/src/parsing.o \
	${OBJECTDIR}/src/bruteForce.o \
	${OBJECTDIR}/src/instance.o \
	${OBJECTDIR}/src/errors.o


# C Compiler Flags
CFLAGS=-lm

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ./voyageurdecommerce

./voyageurdecommerce: ${OBJECTFILES}
	${MKDIR} -p .
	${LINK.c} -o ./voyageurdecommerce ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/src/main.o: src/main.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/main.o src/main.c

${OBJECTDIR}/src/distance.o: src/distance.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/distance.o src/distance.c

${OBJECTDIR}/src/tour.o: src/tour.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/tour.o src/tour.c

${OBJECTDIR}/src/town.o: src/town.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/town.o src/town.c

${OBJECTDIR}/src/util.o: src/util.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/util.o src/util.c

${OBJECTDIR}/src/parsing.o: src/parsing.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/parsing.o src/parsing.c

${OBJECTDIR}/src/bruteForce.o: src/bruteForce.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/bruteForce.o src/bruteForce.c

${OBJECTDIR}/src/instance.o: src/instance.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/instance.o src/instance.c

${OBJECTDIR}/src/errors.o: src/errors.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I/development/cours/L2/algo3/TP/voyageurDeCommerce/lib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/errors.o src/errors.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ./voyageurdecommerce

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
