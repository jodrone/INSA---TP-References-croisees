################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fichier.cpp \
../src/Flot.cpp \
../src/Main.cpp \
../src/Occurrences.cpp \
../src/RefCroisees.cpp 

OBJS += \
./src/Fichier.o \
./src/Flot.o \
./src/Main.o \
./src/Occurrences.o \
./src/RefCroisees.o 

CPP_DEPS += \
./src/Fichier.d \
./src/Flot.d \
./src/Main.d \
./src/Occurrences.d \
./src/RefCroisees.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


