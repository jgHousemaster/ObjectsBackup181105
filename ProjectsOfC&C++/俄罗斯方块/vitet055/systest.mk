systest: systest.c
	$(CC) -osystest $(CFLAGS) $(CPPFLAGS) systest.c
clean:
	rm -f systest systest.exe
