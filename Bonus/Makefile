define \n


endef

test:
	@echo "\033[34mTesting Colleen \033[33m output checkable in tmp_Colleen\033[0m"
	@node Colleen.js > tmp_Colleen
	diff Colleen.js tmp_Colleen
	@echo ${\n}
	@echo "\033[34mTesting Grace\033[0m"
	@node Grace.js
	diff Grace_kid.js Grace.js
	@echo ${\n}
	@echo "\033[34mTesting Sully \033[33m plus multiple diffs with Sully.js and a grep, enjoy\033[0m"
	mkdir -p tmp;cp Sully.js tmp/;cd tmp/;node Sully.js;ls -la | grep Sully | wc -l
	@echo ${\n}
	for number in {5..0} ; do diff Sully.js tmp/Sully_$$number.js ||: ; done

clean:
	@/bin/rm -f tmp_Colleen Grace_kid.js
	@/bin/rm -rf ./tmp
	@echo "\033[31mFclean\033[32m Done\033[0m"

.PHONY: test clean