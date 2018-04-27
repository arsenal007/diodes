################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cborg/test/test.cpp 

OBJS += \
./src/cborg/test/test.o 

CPP_DEPS += \
./src/cborg/test/test.d 


# Each subdirectory must supply rules for building sources it contributes
src/cborg/test/%.o: ../src/cborg/test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -I"C:\Users\vkuzmenko\workspace\params\inc\libusb-1.0.21\include\libusb-1.0" -I"C:\Users\vkuzmenko\workspace\params\inc" -O3 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


