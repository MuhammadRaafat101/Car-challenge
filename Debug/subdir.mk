################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO.c \
../DIO_cnfg.c \
../Seven_Seg.c \
../TIMER.c \
../TIMER_cnfg.c \
../app.c 

OBJS += \
./DIO.o \
./DIO_cnfg.o \
./Seven_Seg.o \
./TIMER.o \
./TIMER_cnfg.o \
./app.o 

C_DEPS += \
./DIO.d \
./DIO_cnfg.d \
./Seven_Seg.d \
./TIMER.d \
./TIMER_cnfg.d \
./app.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


