export SHELL:=/bin/bash
export SHELLOPTS:=$(if $(SHELLOPTS),$(SHELLOPTS):)pipefail:errexit

all: bin/dtbasic.com

#ASSEMBLER=../../RomWBW/Tools/Linux/uz80as
ASSEMBLER=../../uz80as/src/uz80as

.ONESHELL:

bin/%.com: src/%.asm
	function removeLst {
		rm src/$(basename $(notdir $@)).lst || true
	}
	trap removeLst EXIT
	mkdir -p ./bin
	(cd src && $(ASSEMBLER) -q $(notdir $^) ../$@ )

clean:
	rm -rf ./bin
