# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/06 08:55:40 by jeportie          #+#    #+#              #
#    Updated: 2025/04/11 13:43:08 by jeportie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
VALFLAGS = --leak-check=full
OUTDIR = bin
SRCDIR = src
OBJDIR = obj
MAIN = main.cpp
ARGS=$(filter-out $@,$(MAKECMDGOALS))

#### BEGIN AUTO GENERATED FILES ###
# List of source files:
SRC = \
  src/class/ClapTrap.cpp \
  src/class/ScavTrap.cpp \
  src/class/FragTrap.cpp 
### END AUTO GENERATED FILES ###

# Create object for main.cpp
MAIN_OBJ = $(OBJDIR)/main.o

# Pattern rule for src files (for .cpp files)
OBJS = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o) $(MAIN_OBJ)

# Dependency files (if needed)
DEPS = $(OBJ:.o=.d)

all: $(OUTDIR)/$(NAME)

# Linking rule
$(OUTDIR)/$(NAME): $(OBJS) | $(OUTDIR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Compile rule for .cpp files in src
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# Compile rule for main.cpp
$(OBJDIR)/main.o: main.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# Directories creation
$(OUTDIR):
	mkdir -p $(OUTDIR)

# Rules
clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(OUTDIR)

re: fclean all

build_and_run: all
	./$(OUTDIR)/$(NAME) $(ARGS)

valgrind: all
	valgrind $(VALFLAGS) ./$(OUTDIR)/$(NAME) $(ARGS)
	
run_with_args: all
	bash /sh/run_with_args.sh

val_with_args: all
	bash /sh/val_with_args.sh

.PHONY: all clean fclean re build_and_run run
