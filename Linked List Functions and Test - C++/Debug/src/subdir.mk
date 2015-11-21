################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Linked\ List\ Functions\ and\ Test\ -\ C++.cpp \
../src/LinkedList.cpp 

OBJS += \
./src/Linked\ List\ Functions\ and\ Test\ -\ C++.o \
./src/LinkedList.o 

CPP_DEPS += \
./src/Linked\ List\ Functions\ and\ Test\ -\ C++.d \
./src/LinkedList.d 


# Each subdirectory must supply rules for building sources it contributes
src/Linked\ List\ Functions\ and\ Test\ -\ C++.o: ../src/Linked\ List\ Functions\ and\ Test\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Linked List Functions and Test - C++.d" -MT"src/Linked\ List\ Functions\ and\ Test\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


