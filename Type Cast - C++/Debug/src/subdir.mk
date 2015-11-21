################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Type\ Cast\ -\ C++.cpp 

OBJS += \
./src/Type\ Cast\ -\ C++.o 

CPP_DEPS += \
./src/Type\ Cast\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/Type\ Cast\ -\ C++.o: ../src/Type\ Cast\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Type Cast - C++.d" -MT"src/Type\ Cast\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


