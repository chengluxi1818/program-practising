################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Everything\ of\ Strings\ -\ C++.cpp 

OBJS += \
./src/Everything\ of\ Strings\ -\ C++.o 

CPP_DEPS += \
./src/Everything\ of\ Strings\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Everything\ of\ Strings\ -\ C++.o: ../src/Everything\ of\ Strings\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"src/Everything of Strings - C++.d" -MT"src/Everything\ of\ Strings\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


