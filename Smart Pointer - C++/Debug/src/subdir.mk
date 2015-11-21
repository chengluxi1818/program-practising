################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MyPointer.cpp \
../src/Smart\ Pointer\ -\ C++.cpp 

OBJS += \
./src/MyPointer.o \
./src/Smart\ Pointer\ -\ C++.o 

CPP_DEPS += \
./src/MyPointer.d \
./src/Smart\ Pointer\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Smart\ Pointer\ -\ C++.o: ../src/Smart\ Pointer\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Smart Pointer - C++.d" -MT"src/Smart\ Pointer\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


