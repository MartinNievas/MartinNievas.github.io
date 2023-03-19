"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" => General
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" Sets how many lines of history VIM has to remember
set history=500

set encoding=utf-8
syntax on

"" Colores de identado
set listchars=tab:>·,trail:·

"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" => Text, tab and indent related
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" Use spaces instead of tabs
  set expandtab

" Be smart when using tabs ;)
set smarttab

" 1 tab == 2 spaces
set tabstop=2 softtabstop=0 expandtab shiftwidth=2
set noai

"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" => Moving around, tabs, windows and buffers
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" " Map <Space> to / (search) and Ctrl-<Space> to ? (backwards search)
  map <space> /
  map <c-space> ?


"" Smart way to move between windows
  :map <Tab> <ESC>:tabn<RETURN>
  :map <S-Tab> <ESC>:tabprevious<RETURN>
