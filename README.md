This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the one (of many) most appropriate solution for an
optimized data sorting.

You have to write a program named push_swap which will receive as an argument
the stack a formatted as a list of integers. The first argument should be at the top
of the stack (be careful about the order).
• The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.
• Instructions must be separated by a ’\n’ and nothing else.
• The goal is to sort the stack with the minimum possible number of operations.
During defence we’ll compare the number of instructions your program found with
a maximum number of operations tolerated. If your program either displays a list
too big or if the list isn’t sorted properly, you’ll get no points.
• If no parameters are specified, the program must not display anything and give the
prompt back
• In case of error, you must display Error followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer, and/or there are duplicates.

The game is composed of 2 stacks named a and b.
• To start with:
◦ the stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.
◦ b is empty
• The goal is to sort in ascending order numbers into stack a.
• To do this you have the following operations at your disposal:


ATTENTION apparemment il faut gerer comme sous bash. pas besoin de gerer avec le split pour les arguments

Useful ressources 
- https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
- https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

tester
- https://github.com/laisarena/push_swap_tester