################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Reverse\ Integer\ -\ C++.cpp 

OBJS += \
./src/Reverse\ Integer\ -\ C++.o 

CPP_DEPS += \
./src/Reverse\ Integer\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Reverse\ Integer\ -\ C++.o: ../src/Reverse\ Integer\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Reverse Integer - C++.d" -MT"src/Reverse\ Integer\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


