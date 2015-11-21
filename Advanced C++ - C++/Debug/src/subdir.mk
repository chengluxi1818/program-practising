################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Advance.cpp \
../src/Advanced\ C++\ -\ C++.cpp \
../src/Template.cpp 

OBJS += \
./src/Advance.o \
./src/Advanced\ C++\ -\ C++.o \
./src/Template.o 

CPP_DEPS += \
./src/Advance.d \
./src/Advanced\ C++\ -\ C++.d \
./src/Template.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Advanced\ C++\ -\ C++.o: ../src/Advanced\ C++\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Advanced C++ - C++.d" -MT"src/Advanced\ C++\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


