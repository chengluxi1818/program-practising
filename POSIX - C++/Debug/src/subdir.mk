################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/POSIX\ -\ C++.cpp 

OBJS += \
./src/POSIX\ -\ C++.o 

CPP_DEPS += \
./src/POSIX\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/POSIX\ -\ C++.o: ../src/POSIX\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/POSIX - C++.d" -MT"src/POSIX\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


