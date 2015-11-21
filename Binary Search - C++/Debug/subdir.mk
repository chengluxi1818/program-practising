################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BSFindElementInCircular.cpp \
../BSFindRotate.cpp \
../BSIterative.cpp \
../BSRecursion.cpp \
../BSTFindoOccurence.cpp 

OBJS += \
./BSFindElementInCircular.o \
./BSFindRotate.o \
./BSIterative.o \
./BSRecursion.o \
./BSTFindoOccurence.o 

CPP_DEPS += \
./BSFindElementInCircular.d \
./BSFindRotate.d \
./BSIterative.d \
./BSRecursion.d \
./BSTFindoOccurence.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


