################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Virtual\ Inheritance\ -\ C++.cpp 

OBJS += \
./src/Virtual\ Inheritance\ -\ C++.o 

CPP_DEPS += \
./src/Virtual\ Inheritance\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Virtual\ Inheritance\ -\ C++.o: ../src/Virtual\ Inheritance\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Virtual Inheritance - C++.d" -MT"src/Virtual\ Inheritance\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


