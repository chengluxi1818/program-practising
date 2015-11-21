################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Multithreading\ -\ C++.cpp 

OBJS += \
./src/Multithreading\ -\ C++.o 

CPP_DEPS += \
./src/Multithreading\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Multithreading\ -\ C++.o: ../src/Multithreading\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++11 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Multithreading - C++.d" -MT"src/Multithreading\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


