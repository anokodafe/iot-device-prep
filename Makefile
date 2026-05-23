.PHONY: clean All

All:
	@echo "==========Building project:[ day09 - Debug ]=========="
	@cd "day09" && "$(MAKE)" -f  "day09.mk"
clean:
	@echo "==========Cleaning project:[ day09 - Debug ]----------"
	@cd "day09" && "$(MAKE)" -f  "day09.mk" clean
