cmake_minimum_required(VERSION 2.8.9)

# IncludeOS install location
if (NOT DEFINED ENV{INCLUDEOS_PREFIX})
  set(ENV{INCLUDEOS_PREFIX} /usr/local)
endif()

# Use toolchain (if needed)
include($ENV{INCLUDEOS_PREFIX}/includeos/pre.service.cmake)


# Name of your project
project (seed)

# Human-readable name of your service
set(SERVICE_NAME "IncludeOS seed")

# Name of your service binary
set(BINARY       "seed")

# Maximum memory can be hard-coded into the binary
set(MAX_MEM 128)

# Source files to be linked with OS library parts to form bootable image
set(SOURCES
  service.cpp # ...add more here
  )

#
# Service CMake options
# (uncomment to enable)
#

# MISC:

# To add your own include paths:
# set(LOCAL_INCLUDES ".")

# Adding memdisk (expects my.disk to exist in current dir):
# set(MEMDISK ${CMAKE_SOURCE_DIR}/my.disk)

# DRIVERS / PLUGINS:

set(DRIVERS
  # virtionet   # Virtio networking
  # virtioblock # Virtio block device
  # ... Others from IncludeOS/src/drivers
  )

set(PLUGINS
  # syslogd    # Syslog over UDP
  # ...others
  )

# THIRD PARTY LIBRARIES:

set(LIBRARIES
  # path to full library
  )


# include service build script
include($ENV{INCLUDEOS_PREFIX}/includeos/post.service.cmake)