.PHONY: clean All

All:
	@echo "==========Building project:[ day00 - Debug ]=========="
	@cd "c-practice\week00" && "$(MAKE)" -f  "day00.mk"
clean:
	@echo "==========Cleaning project:[ day00 - Debug ]----------"
	@cd "c-practice\week00" && "$(MAKE)" -f  "day00.mk" clean
