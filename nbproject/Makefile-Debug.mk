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
	${OBJECTDIR}/src/localSearch.o \
	${OBJECTDIR}/src/distance.o \
	${OBJECTDIR}/src/tour.o \
	${OBJECTDIR}/src/town.o \
	${OBJECTDIR}/src/util.o \
	${OBJECTDIR}/src/genetic.o \
	${OBJECTDIR}/src/parsing.o \
	${OBJECTDIR}/src/bruteForce.o \
	${OBJECTDIR}/src/instance.o \
	${OBJECTDIR}/src/errors.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f4 \
	${TESTDIR}/TestFiles/f5 \
	${TESTDIR}/TestFiles/f6 \
	${TESTDIR}/TestFiles/f7

# C Compiler Flags
CFLAGS=-lm -I lib/

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ./voyageurDeCommerce

./voyageurDeCommerce: ${OBJECTFILES}
	${MKDIR} -p .
	${LINK.c} -o ./voyageurDeCommerce ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/src/main.o: nbproject/Makefile-${CND_CONF}.mk src/main.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/main.o src/main.c

${OBJECTDIR}/src/localSearch.o: nbproject/Makefile-${CND_CONF}.mk src/localSearch.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/localSearch.o src/localSearch.c

${OBJECTDIR}/src/distance.o: nbproject/Makefile-${CND_CONF}.mk src/distance.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/distance.o src/distance.c

${OBJECTDIR}/src/tour.o: nbproject/Makefile-${CND_CONF}.mk src/tour.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/tour.o src/tour.c

${OBJECTDIR}/src/town.o: nbproject/Makefile-${CND_CONF}.mk src/town.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/town.o src/town.c

${OBJECTDIR}/src/util.o: nbproject/Makefile-${CND_CONF}.mk src/util.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/util.o src/util.c

${OBJECTDIR}/src/genetic.o: nbproject/Makefile-${CND_CONF}.mk src/genetic.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/genetic.o src/genetic.c

${OBJECTDIR}/src/parsing.o: nbproject/Makefile-${CND_CONF}.mk src/parsing.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/parsing.o src/parsing.c

${OBJECTDIR}/src/bruteForce.o: nbproject/Makefile-${CND_CONF}.mk src/bruteForce.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/bruteForce.o src/bruteForce.c

${OBJECTDIR}/src/instance.o: nbproject/Makefile-${CND_CONF}.mk src/instance.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/instance.o src/instance.c

${OBJECTDIR}/src/errors.o: nbproject/Makefile-${CND_CONF}.mk src/errors.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.c) -g -Wall -Ilib -std=c99 -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/errors.o src/errors.c

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/distanceTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} 

${TESTDIR}/TestFiles/f3: ${TESTDIR}/tests/instanceTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} 

${TESTDIR}/TestFiles/f4: ${TESTDIR}/tests/parsingTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c}   -o ${TESTDIR}/TestFiles/f4 $^ ${LDLIBSOPTIONS} 

${TESTDIR}/TestFiles/f5: ${TESTDIR}/tests/tourTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c}   -o ${TESTDIR}/TestFiles/f5 $^ ${LDLIBSOPTIONS} -lcunit -lcunit 

${TESTDIR}/TestFiles/f6: ${TESTDIR}/tests/townTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c}   -o ${TESTDIR}/TestFiles/f6 $^ ${LDLIBSOPTIONS} -lcunit 

${TESTDIR}/TestFiles/f7: ${TESTDIR}/tests/utilTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c}   -o ${TESTDIR}/TestFiles/f7 $^ ${LDLIBSOPTIONS} -lcunit 


${TESTDIR}/tests/distanceTest.o: tests/distanceTest.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I. -I. -Ilib -std=c99 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/distanceTest.o tests/distanceTest.c


${TESTDIR}/tests/instanceTest.o: tests/instanceTest.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I. -Ilib -std=c99 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/instanceTest.o tests/instanceTest.c


${TESTDIR}/tests/parsingTest.o: tests/parsingTest.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I. -Ilib -std=c99 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/parsingTest.o tests/parsingTest.c


${TESTDIR}/tests/tourTest.o: tests/tourTest.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I. -I. -I. -Ilib -std=c99 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/tourTest.o tests/tourTest.c


${TESTDIR}/tests/townTest.o: tests/townTest.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I. -I. -Ilib -std=c99 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/townTest.o tests/townTest.c


${TESTDIR}/tests/utilTest.o: tests/utilTest.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.c) -g -Wall -I. -I. -Ilib -std=c99 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/utilTest.o tests/utilTest.c


${OBJECTDIR}/src/main_nomain.o: ${OBJECTDIR}/src/main.o src/main.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/main_nomain.o src/main.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/main_nomain.o;\
	fi

${OBJECTDIR}/src/localSearch_nomain.o: ${OBJECTDIR}/src/localSearch.o src/localSearch.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/localSearch.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/localSearch_nomain.o src/localSearch.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/localSearch.o ${OBJECTDIR}/src/localSearch_nomain.o;\
	fi

${OBJECTDIR}/src/distance_nomain.o: ${OBJECTDIR}/src/distance.o src/distance.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/distance.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/distance_nomain.o src/distance.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/distance.o ${OBJECTDIR}/src/distance_nomain.o;\
	fi

${OBJECTDIR}/src/tour_nomain.o: ${OBJECTDIR}/src/tour.o src/tour.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/tour.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/tour_nomain.o src/tour.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/tour.o ${OBJECTDIR}/src/tour_nomain.o;\
	fi

${OBJECTDIR}/src/town_nomain.o: ${OBJECTDIR}/src/town.o src/town.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/town.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/town_nomain.o src/town.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/town.o ${OBJECTDIR}/src/town_nomain.o;\
	fi

${OBJECTDIR}/src/util_nomain.o: ${OBJECTDIR}/src/util.o src/util.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/util.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/util_nomain.o src/util.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/util.o ${OBJECTDIR}/src/util_nomain.o;\
	fi

${OBJECTDIR}/src/genetic_nomain.o: ${OBJECTDIR}/src/genetic.o src/genetic.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/genetic.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/genetic_nomain.o src/genetic.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/genetic.o ${OBJECTDIR}/src/genetic_nomain.o;\
	fi

${OBJECTDIR}/src/parsing_nomain.o: ${OBJECTDIR}/src/parsing.o src/parsing.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/parsing.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/parsing_nomain.o src/parsing.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/parsing.o ${OBJECTDIR}/src/parsing_nomain.o;\
	fi

${OBJECTDIR}/src/bruteForce_nomain.o: ${OBJECTDIR}/src/bruteForce.o src/bruteForce.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/bruteForce.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/bruteForce_nomain.o src/bruteForce.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/bruteForce.o ${OBJECTDIR}/src/bruteForce_nomain.o;\
	fi

${OBJECTDIR}/src/instance_nomain.o: ${OBJECTDIR}/src/instance.o src/instance.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/instance.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/instance_nomain.o src/instance.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/instance.o ${OBJECTDIR}/src/instance_nomain.o;\
	fi

${OBJECTDIR}/src/errors_nomain.o: ${OBJECTDIR}/src/errors.o src/errors.c 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/errors.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.c) -g -Wall -Ilib -std=c99 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/errors_nomain.o src/errors.c;\
	else  \
	    ${CP} ${OBJECTDIR}/src/errors.o ${OBJECTDIR}/src/errors_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	    ${TESTDIR}/TestFiles/f5 || true; \
	    ${TESTDIR}/TestFiles/f6 || true; \
	    ${TESTDIR}/TestFiles/f7 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ./voyageurDeCommerce

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
