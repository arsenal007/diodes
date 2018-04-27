################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/jsonxx/jsonxx.cc 

CC_DEPS += \
./src/jsonxx/jsonxx.d 

OBJS += \
./src/jsonxx/jsonxx.o 


# Each subdirectory must supply rules for building sources it contributes
src/jsonxx/%.o: ../src/jsonxx/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -I"C:\Users\vkuzmenko\workspace\params\inc\libusb-1.0.21\include\libusb-1.0" -I"C:\Users\vkuzmenko\workspace\params\inc" -O3 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


