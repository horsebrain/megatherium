# Megatherium Makefile 
# 11/28/2012

#TODO GPL goes here

# Source files
SRCS = 		\
	main.c

# Object files
OBJS = $(SRCS:.c=.o)

# Target exe
TARGET = mega

CFLAGS = -Wall -g
LDLIBS = -lpthread

# Makefile Targets
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(TARGET)


clean:
	@echo "Cleaning up.."
	rm -rf *.o $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
