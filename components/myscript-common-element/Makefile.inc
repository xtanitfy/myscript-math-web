SHELL = /bin/bash
GIT_VERSION := $(shell git describe --tags --long --always)
VERSION = 1.2.0

MAKE := $(MAKE) --no-print-directory

NPM_CACHE = $(HOME)/.npm

CURRENT_DIR := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))

GITHUB = https://github.com/MyScript/myscript-common-element.git