#
# Makefile for the focaltech touchscreen drivers.
#

# Each configuration option enables a list of files.

obj-$(CONFIG_TOUCHSCREEN_FOCALTECH) += focaltech_fts.o
obj-$(CONFIG_TOUCHSCREEN_FOCALTECH_TEST) += focaltech_fts_test.o
obj-$(CONFIG_TOUCHSCREEN_FOCALTECH_ESDCHECK) += focaltech_esdcheck.o
obj-$(CONFIG_TOUCHSCREEN_FOCALTECH_POINT_REPORT_CHECK) := focaltech_point_report_check.o

focaltech_fts-y	:= focaltech_core.o  \
		focaltech_ex_fun.o  \
		focaltech_ex_mode.o \
		focaltech_flash.o \
		focaltech_flash/focaltech_upgrade_ft3658u.o \
		focaltech_gesture.o \
		focaltech_spi.o

focaltech_fts_test-y := focaltech_test/focaltech_test.o \
		focaltech_test/focaltech_test_detail_threshold.o \
		focaltech_test/focaltech_test_ini.o \
		focaltech_test/supported_ic/focaltech_test_ft3658u.o
