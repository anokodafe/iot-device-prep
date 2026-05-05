.PHONY: clean All

All:
	@echo "==========Building project:[ day01 - Debug ]=========="
	@cd "c-practice\day01" && "$(MAKE)" -f  "day01.mk"
clean:
	@echo "==========Cleaning project:[ day01 - Debug ]----------"
	@cd "c-practice\day01" && "$(MAKE)" -f  "day01.mk" clean
