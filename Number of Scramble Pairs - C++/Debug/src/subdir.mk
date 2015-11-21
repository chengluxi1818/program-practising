################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Number\ of\ Scramble\ Pairs\ -\ C++.cpp 

OBJS += \
./src/Number\ of\ Scramble\ Pairs\ -\ C++.o 

CPP_DEPS += \
./src/Number\ of\ Scramble\ Pairs\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Number\ of\ Scramble\ Pairs\ -\ C++.o: ../src/Number\ of\ Scramble\ Pairs\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++11 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Number of Scramble Pairs - C++.d" -MT"src/Number\ of\ Scramble\ Pairs\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


