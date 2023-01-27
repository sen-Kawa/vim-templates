# vim-templates

Add the following line to your `.vimrc`

`autocmd BufNewFile *.class.hpp 0r ~/.vim/templates/Fixed.class.hpp`

- `autocmd` Autocommands are a way to tell Vim to run certain commands whenever certain events happen. 
- `BufNewFile` this event will be triggered when you begin editing a new file by name
- `*.class.cpp` pattern you want the new file to match
- `0r` read into the buffer starting at line 0
- `~/.vim/templates/Fixed.class.cpp` file to read into the new file

Then `:source %`
