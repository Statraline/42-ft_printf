# 42 - ft_printf

![Langage](https://img.shields.io/badge/Language-C-blue)
![Note](https://img.shields.io/badge/Score-100%2F100-brightgreen)
![Statut](https://img.shields.io/badge/Status-Finished-success)

## 💡 Description

Le but de ce projet est de recoder la célèbre fonction `printf` de la bibliothèque standard C.
Ce projet m'a permis de découvrir les **fonctions variadiques** en C (`va_start`, `va_arg`, `va_end`) et de structurer un code capable de gérer différents types de formats.

## 🛠️ Fonctionnalités

Mon `ft_printf` gère les conversions suivantes :

| Conversion | Description |
| :---: | :--- |
| `%c` | Affiche un seul caractère. |
| `%s` | Affiche une chaîne de caractères (string). |
| `%p` | Affiche un pointeur (adresse mémoire en hexadécimal). |
| `%d` | Affiche un nombre décimal (base 10). |
| `%i` | Affiche un entier en base 10. |
| `%u` | Affiche un nombre décimal non signé (unsigned). |
| `%x` | Affiche un nombre en hexadécimal (minuscules). |
| `%X` | Affiche un nombre en hexadécimal (majuscules). |
| `%%` | Affiche un signe pourcentage. |

## 🚀 Utilisation

1. **Cloner le dépôt :**
```bash
git clone [https://github.com/Statraline/42-ft_printf.git](https://github.com/Statraline/42-ft_printf.git)
