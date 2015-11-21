################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Reverse\ String\ -\ C++.cpp 

OBJS += \
./src/Reverse\ String\ -\ C++.o 

CPP_DEPS += \
./src/Reverse\ String\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Reverse\ String\ -\ C++.o: ../src/Reverse\ String\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Reverse String - C++.d" -MT"src/Reverse\ String\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


