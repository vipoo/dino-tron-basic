export SHELL:=/bin/bash
export SHELLOPTS:=$(if $(SHELLOPTS),$(SHELLOPTS):)pipefail:errexit
.ONESHELL:

all: bin/dtbasic.com

ASSEMBLER=uz80as

.ONESHELL:

includes = $(wildcard src/*.inc)

bin/dtbasic.com: src/dtbasic.asm ${includes}
	function removeLst {
		rm src/$(basename $(notdir $@)).lst || true
	}
	#trap removeLst EXIT
	mkdir -p ./bin
	(cd src && $(ASSEMBLER) ./dtbasic.asm ../$@ )

clean:
	rm -rf ./bin
