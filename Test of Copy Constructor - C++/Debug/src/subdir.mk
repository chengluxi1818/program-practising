################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CopyConstructor.cpp \
../src/Test\ of\ Copy\ Constructor\ -\ C++.cpp 

OBJS += \
./src/CopyConstructor.o \
./src/Test\ of\ Copy\ Constructor\ -\ C++.o 

CPP_DEPS += \
./src/CopyConstructor.d \
./src/Test\ of\ Copy\ Constructor\ -\ C++.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++11 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Test\ of\ Copy\ Constructor\ -\ C++.o: ../src/Test\ of\ Copy\ Constructor\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++11 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Test of Copy Constructor - C++.d" -MT"src/Test\ of\ Copy\ Constructor\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


