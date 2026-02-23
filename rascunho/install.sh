#!/bin/bash

# Caminho onde seu repositório foi clonado
DOTFILES_DIR=$(pwd)

echo "Iniciando a automação dos dotfiles..."

# Função para criar o link simbólico com backup
link_file() {
    local src=$1
    local dest=$2

    # Se o arquivo já existe e não é um link, faz backup
    if [ -f "$dest" ] && [ ! -L "$dest" ]; then
        echo "Fazendo backup de $dest para $dest.bak"
        mv "$dest" "$dest.bak"
    fi

    # Remove o arquivo/link antigo e cria o novo
    rm -f "$dest"
    ln -s "$src" "$dest"
    echo "✅ Link criado: $dest -> $src"
}

# Executa para o ZSH e VIM
link_file "$DOTFILES_DIR/.zshrc" "$HOME/.zshrc"
link_file "$DOTFILES_DIR/.vimrc" "$HOME/.vimrc"

echo "Tudo pronto! Reinicie o terminal ou dê 'source ~/.zshrc'"
