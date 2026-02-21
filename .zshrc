    source $HOME/.zprezto/runcoms/zshrc

    alias gogit='git add . && git commit -m "update" && git push'

    PROMPT='%(?.%F{129}❯%F{141}❯%F{51}❯.%F{160}❯%F{196}❯%F{226}❯)%f '

    # Esta versão verifica se existem ficheiros antes de tentar carregar
for config_file in $HOME/.zsh/*.zsh(N); do
  source "$config_file"
done
