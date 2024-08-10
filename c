[33mcommit 1c06754424e36fded58a0b124a8b1c93f692cbd3[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmaster[m[33m, [m[1;31mproyect/master[m[33m)[m
Author: magrocolqui@gmail.com <magrocolqui@gmail.com>
Date:   Tue Aug 6 16:13:13 2024 -0500

    ingreso de paguina home Quilcas

[1mdiff --git a/ParqueChullpa.jpg b/ParqueChullpa.jpg[m
[1mnew file mode 100644[m
[1mindex 0000000..a033b94[m
Binary files /dev/null and b/ParqueChullpa.jpg differ
[1mdiff --git a/global.css b/global.css[m
[1mnew file mode 100644[m
[1mindex 0000000..711e0dd[m
[1m--- /dev/null[m
[1m+++ b/global.css[m
[36m@@ -0,0 +1,31 @@[m
[32m+[m[32mbody {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  line-height: normal;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m:root {[m
[32m+[m[32m  /* fonts */[m
[32m+[m[32m  --h4: Poppins;[m
[32m+[m
[32m+[m[32m  /* font sizes */[m
[32m+[m[32m  --h4-size: 22px;[m
[32m+[m[32m  --p2-size: 16px;[m
[32m+[m[32m  --h3-size: 28px;[m
[32m+[m[32m  --p3-size: 14px;[m
[32m+[m[32m  --p4-size: 12px;[m
[32m+[m
[32m+[m[32m  /* Colors */[m
[32m+[m[32m  --color-white: #fff;[m
[32m+[m[32m  --orange-normal: #e77844;[m
[32m+[m[32m  --color-coral-100: rgba(231, 120, 68, 0.8);[m
[32m+[m[32m  --color-coral-200: rgba(231, 120, 68, 0.7);[m
[32m+[m[32m  --white-dark-hover: #999;[m
[32m+[m[32m  --white-dark-active: #737373;[m
[32m+[m[32m  --white-darker: #595959;[m
[32m+[m
[32m+[m[32m  /* Gaps */[m
[32m+[m[32m  --gap-6xl: 25px;[m
[32m+[m
[32m+[m[32m  /* Border radiuses */[m
[32m+[m[32m  --br-mini: 15px;[m
[32m+[m[32m}[m
[1mdiff --git a/index.css b/index.css[m
[1mnew file mode 100644[m
[1mindex 0000000..6527003[m
[1m--- /dev/null[m
[1m+++ b/index.css[m
[36m@@ -0,0 +1,370 @@[m
[32m+[m[32m.derechos-reservados-para {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.derechos-reservados-para-container {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 25px;[m
[32m+[m[32m  left: 30px;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  width: 529px;[m
[32m+[m[32m}[m
[32m+[m[32m.municipalidad-distrital-de {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 62px;[m
[32m+[m[32m  left: calc(50% - 144px);[m
[32m+[m[32m  font-size: var(--p3-size);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
[32m+[m[32m.icon-heroicons-outline-a {[m
[32m+[m[32m  width: 24px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 24px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.contactos {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 25px;[m
[32m+[m[32m  left: 1780px;[m
[32m+[m[32m  width: 110px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m}[m
[32m+[m[32m.barra-final {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: calc(50% - 960px);[m
[32m+[m[32m  background-color: var(--white-dark-active);[m
[32m+[m[32m  border: 1px solid var(--white-dark-active);[m
[32m+[m[32m  box-sizing: border-box;[m
[32m+[m[32m  width: 1920px;[m
[32m+[m[32m  height: 90px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  font-size: var(--p4-size);[m
[32m+[m[32m  color: var(--color-white);[m
[32m+[m[32m}[m
[32m+[m[32m.quilcas-icon {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: calc(50% - 294px);[m
[32m+[m[32m  left: calc(50% - 787.5px);[m
[32m+[m[32m  width: 1575.1px;[m
[32m+[m[32m  height: 588px;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m}[m
[32m+[m[32m.imagem {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: calc(50% - 961px);[m
[32m+[m[32m  width: 1921px;[m
[32m+[m[32m  height: 1080px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  background-image: url(./public/-imagem@3x.png);[m
[32m+[m[32m  background-size: cover;[m
[32m+[m[32m  background-repeat: no-repeat;[m
[32m+[m[32m  background-position: top;[m
[32m+[m[32m}[m
[32m+[m[32m.conoce-de-nosotros,[m
[32m+[m[32m.datos {[m
[32m+[m[32m  align-self: stretch;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.datos {[m
[32m+[m[32m  font-size: var(--p2-size);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--white-darker);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  height: 264px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.text {[m
[32m+[m[32m  width: 611px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  justify-content: flex-start;[m
[32m+[m[32m  gap: var(--gap-6xl);[m
[32m+[m[32m}[m
[32m+[m[32m.figmap-icon {[m
[32m+[m[32m  width: 700px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 500px;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m}[m
[32m+[m[32m.conoce {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 1203px;[m
[32m+[m[32m  left: calc(50% - 766px);[m
[32m+[m[32m  width: 1532px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m}[m
[32m+[m[32m.promoviendo-el-ecoturismo-container,[m
[32m+[m[32m.titulo2-child {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.titulo2-child {[m
[32m+[m[32m  top: 41.5px;[m
[32m+[m[32m  left: 590px;[m
[32m+[m[32m  width: 964px;[m
[32m+[m[32m  height: 0.6px;[m
[32m+[m[32m  object-fit: contain;[m
[32m+[m[32m}[m
[32m+[m[32m.titulo2 {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 1907px;[m
[32m+[m[32m  left: 194px;[m
[32m+[m[32m  width: 1532px;[m
[32m+[m[32m  height: 84px;[m
[32m+[m[32m}[m
[32m+[m[32m.el-ecoturismo-es {[m
[32m+[m[32m  align-self: stretch;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: var(--p2-size);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--white-darker);[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  height: 172px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.text1 {[m
[32m+[m[32m  width: 611px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: var(--gap-6xl);[m
[32m+[m[32m}[m
[32m+[m[32m.imagen-icon {[m
[32m+[m[32m  width: 700px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-radius: 18.15px;[m
[32m+[m[32m  height: 500px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m}[m
[32m+[m[32m.ecoturismo {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 2121px;[m
[32m+[m[32m  left: calc(50% - 766px);[m
[32m+[m[32m  width: 1532px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  font-size: var(--h4-size);[m
[32m+[m[32m  color: var(--color-coral-100);[m
[32m+[m[32m}[m
[32m+[m[32m.separador-child {[m
[32m+[m[32m  width: 978px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  max-height: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.conoce-sobre-algunos {[m
[32m+[m[32m  width: 587px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.separador {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 2751px;[m
[32m+[m[32m  left: 173px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: flex-start;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m}[m
[32m+[m[32m.disfruta-de-una {[m
[32m+[m[32m  align-self: stretch;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: var(--p2-size);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--white-darker);[m
[32m+[m[32m}[m
[32m+[m[32m.text2 {[m
[32m+[m[32m  width: 500px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-end;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: var(--gap-6xl);[m
[32m+[m[32m}[m
[32m+[m[32m.treking-child {[m
[32m+[m[32m  width: 700px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-radius: var(--br-mini);[m
[32m+[m[32m  height: 500px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m}[m
[32m+[m[32m.treking {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: calc(50% - 766px);[m
[32m+[m[32m  width: 1532px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  color: var(--color-coral-100);[m
[32m+[m[32m}[m
[32m+[m[32m.disfruta-de-una1 {[m
[32m+[m[32m  align-self: stretch;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: var(--p2-size);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--white-darker);[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  height: 126px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.camping-parent {[m
[32m+[m[32m  width: 500px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  justify-content: flex-start;[m
[32m+[m[32m  gap: var(--gap-6xl);[m
[32m+[m[32m}[m
[32m+[m[32m.camping {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 611px;[m
[32m+[m[32m  left: calc(50% - 766px);[m
[32m+[m[32m  width: 1532px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  text-align: left;[m
[32m+[m[32m}[m
[32m+[m[32m.conoce-las-tradiciones {[m
[32m+[m[32m  align-self: stretch;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: var(--p2-size);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--white-darker);[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  height: 112px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.intercambio-cultural-parent {[m
[32m+[m[32m  width: 500px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-end;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 34px;[m
[32m+[m[32m}[m
[32m+[m[32m.contenido,[m
[32m+[m[32m.intercambio {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  left: calc(50% - 766px);[m
[32m+[m[32m  width: 1532px;[m
[32m+[m[32m}[m
[32m+[m[32m.intercambio {[m
[32m+[m[32m  top: 1222px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m}[m
[32m+[m[32m.contenido {[m
[32m+[m[32m  top: 2913px;[m
[32m+[m[32m  height: 1722px;[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m  font-size: var(--h4-size);[m
[32m+[m[32m  color: var(--color-coral-200);[m
[32m+[m[32m}[m
[32m+[m[32m.escudo-icon {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: calc(50% - 40px);[m
[32m+[m[32m  left: 20px;[m
[32m+[m[32m  width: 80px;[m
[32m+[m[32m  height: 80px;[m
[32m+[m[32m}[m
[32m+[m[32m.cultura,[m
[32m+[m[32m.turismo {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.turismo {[m
[32m+[m[32m  width: 102px;[m
[32m+[m[32m  margin: 0 !important;[m
[32m+[m[32m  left: -15px;[m
[32m+[m[32m  height: 33px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  z-index: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.cultura {[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.atractivos {[m
[32m+[m[32m  width: 95px;[m
[32m+[m[32m  margin: 0 !important;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 141px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.atractivos,[m
[32m+[m[32m.negocio,[m
[32m+[m[32m.turismo-parent {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  height: 33px;[m
[32m+[m[32m}[m
[32m+[m[32m.negocio {[m
[32m+[m[32m  width: 100px;[m
[32m+[m[32m  margin: 0 !important;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 290px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.turismo-parent {[m
[32m+[m[32m  top: calc(50% - 17px);[m
[32m+[m[32m  left: calc(50% + 304px);[m
[32m+[m[32m  width: 431px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: row;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m}[m
[32m+[m[32m.barra,[m
[32m+[m[32m.home-page {[m
[32m+[m[32m  background-color: var(--color-white);[m
[32m+[m[32m}[m
[32m+[m[32m.barra {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 39px;[m
[32m+[m[32m  left: calc(50% - 767px);[m
[32m+[m[32m  border-radius: var(--br-mini);[m
[32m+[m[32m  border: 2px solid var(--orange-normal);[m
[32m+[m[32m  box-sizing: border-box;[m
[32m+[m[32m  width: 1534px;[m
[32m+[m[32m  height: 102px;[m
[32m+[m[32m  font-size: var(--h4-size);[m
[32m+[m[32m  color: var(--white-dark-hover);[m
[32m+[m[32m}[m
[32m+[m[32m.home-page {[m
[32m+[m[32m  width: 1920px;[m
[32m+[m[32m  max-width: 100%;[m
[32m+[m[32m  height: 4787px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  text-align: left;[m
[32m+[m[32m  font-size: var(--h3-size);[m
[32m+[m[32m  color: var(--orange-normal);[m
[32m+[m[32m  font-family: var(--h4);[m
[32m+[m[32m}[m
[1mdiff --git a/index.html b/index.html[m
[1mnew file mode 100644[m
[1mindex 0000000..2e82103[m
[1m--- /dev/null[m
[1m+++ b/index.html[m
[36m@@ -0,0 +1,178 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html>[m
[32m+[m[32m  <head>[m
[32m+[m[32m    <meta charset="utf-8" />[m
[32m+[m[32m    <meta name="viewport" content="initial-scale=1, width=device-width" />[m
[32m+[m
[32m+[m[32m    <link rel="stylesheet" href="./global.css" />[m
[32m+[m[32m    <link rel="stylesheet" href="./index.css" />[m
[32m+[m[32m    <link[m
[32m+[m[32m      rel="stylesheet"[m
[32m+[m[32m      href="https://fonts.googleapis.com/css2?family=Poppins:wght@400;500;700&display=swap"[m
[32m+[m[32m    />[m
[32m+[m[32m  </head>[m
[32m+[m[32m  <body>[m
[32m+[m[32m    <div class="home-page">[m
[32m+[m[32m      <div class="barra-final">[m
[32m+[m[32m        <div class="derechos-reservados-para-container">[m
[32m+[m[32m          <p class="derechos-reservados-para">[m
[32m+[m[32m            Derechos reservados para los programadores y encargados de la[m
[32m+[m[32m            plataformas[m
[32m+[m[32m          </p>[m
[32m+[m[32m          <p class="derechos-reservados-para">[m
[32m+[m[32m            Dudas y consusltas llamar al +51 999 999 999[m
[32m+[m[32m          </p>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="municipalidad-distrital-de">[m
[32m+[m[32m          Municipalidad Distrital de Qullcas - 2024[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="contactos">[m
[32m+[m[32m          <img[m
[32m+[m[32m            class="icon-heroicons-outline-a"[m
[32m+[m[32m            alt=""[m
[32m+[m[32m            src="./public/icon--heroicons--outline--atsymbol.svg"[m
[32m+[m[32m          />[m
[32m+[m
[32m+[m[32m          <img[m
[32m+[m[32m            class="icon-heroicons-outline-a"[m
[32m+[m[32m            alt=""[m
[32m+[m[32m            src="./public/icon--heroicons--outline--chat.svg"[m
[32m+[m[32m          />[m
[32m+[m
[32m+[m[32m          <img[m
[32m+[m[32m            class="icon-heroicons-outline-a"[m
[32m+[m[32m            alt=""[m
[32m+[m[32m            src="./public/icon--heroicons--outline--phone.svg"[m
[32m+[m[32m          />[m
[32m+[m[32m        </div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="imagem">[m
[32m+[m[32m        <img class="quilcas-icon" alt="" src="./public/quilcas@2x.png" />[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="conoce">[m
[32m+[m[32m        <div class="text">[m
[32m+[m[32m          <b class="conoce-de-nosotros">Conoce de Nosotros</b>[m
[32m+[m[32m          <div class="datos">[m
[32m+[m[32m            <span>[m
[32m+[m[32m              <p class="derechos-reservados-para">[m
[32m+[m[32m                El distrito de Quilcas es uno de los veintiocho distritos de la[m
[32m+[m[32m                Provincia de Huancayo, en el Departamento de Junín, bajo la[m
[32m+[m[32m                administración del Gobierno Regional de Junín, Perú.[m
[32m+[m[32m              </p>[m
[32m+[m[32m              <p class="derechos-reservados-para">&nbsp;</p>[m
[32m+[m[32m              <p class="derechos-reservados-para">[m
[32m+[m[32m                Este distrito, creado por la Ley 11846 el 27 de mayo de 1952[m
[32m+[m[32m                durante el gobierno del Presidente Manuel A. Odría, abarca una[m
[32m+[m[32m                superficie de 167.98 km². Quilcas forma parte de la[m
[32m+[m[32m                Arquidiócesis de Huancayo, reflejando su importancia tanto a[m
[32m+[m[32m                nivel civil como eclesiástico.[m
[32m+[m[32m              </p>[m
[32m+[m[32m            </span>[m
[32m+[m[32m          </div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <img class="figmap-icon" alt="" src="./public/figmap@2x.png" />[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="titulo2">[m
[32m+[m[32m        <b class="promoviendo-el-ecoturismo-container">[m
[32m+[m[32m          <p class="derechos-reservados-para">[m
[32m+[m[32m            Promoviendo el ecoturismo en Quílcas:[m
[32m+[m[32m          </p>[m
[32m+[m[32m          <p class="derechos-reservados-para">[m
[32m+[m[32m            Un viaje por la naturaleza y la cultura[m
[32m+[m[32m          </p>[m
[32m+[m[32m        </b>[m
[32m+[m[32m        <img class="titulo2-child" alt="" src />[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="ecoturismo">[m
[32m+[m[32m        <div class="text1">[m
[32m+[m[32m          <b class="conoce-de-nosotros">¿Que es el ecoturismo?</b>[m
[32m+[m[32m          <div class="el-ecoturismo-es">[m
[32m+[m[32m            El ecoturismo es turismo responsable que permite disfrutar y conocer[m
[32m+[m[32m            la naturaleza en bosques, montañas y parques nacionales. Se minimiza[m
[32m+[m[32m            el impacto ambiental con prácticas sostenibles y se respeta la flora[m
[32m+[m[32m            y fauna. Además, se apoya a las comunidades locales mediante la[m
[32m+[m[32m            compra de productos y servicios, y se promueve la educación[m
[32m+[m[32m            ambiental, sensibilizando a los visitantes sobre la importancia de[m
[32m+[m[32m            la conservación.[m
[32m+[m[32m          </div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <img class="imagen-icon" alt="" src="./public/imagen@2x.png" />[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="separador">[m
[32m+[m[32m        <img class="separador-child" alt="" src="./public/line-1.svg" />[m
[32m+[m
[32m+[m[32m        <b class="conoce-sobre-algunos"[m
[32m+[m[32m          >Conoce sobre algunos planes en Quilcas</b[m
[32m+[m[32m        >[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="contenido">[m
[32m+[m[32m        <div class="treking">[m
[32m+[m[32m          <div class="text2">[m
[32m+[m[32m            <b class="conoce-de-nosotros">Trekking</b>[m
[32m+[m[32m            <div class="disfruta-de-una">[m
[32m+[m[32m              Disfruta de una tranquila caminata en este encantador distrito[m
[32m+[m[32m              natural. Descubre bellos paisajes, respira aire puro y aléjate del[m
[32m+[m[32m              bullicio de la ciudad. Relájate y renueva tu espíritu en un[m
[32m+[m[32m              entorno sereno y revitalizante. Ven y vive una experiencia única[m
[32m+[m[32m              en la naturaleza.[m
[32m+[m[32m            </div>[m
[32m+[m[32m          </div>[m
[32m+[m[32m          <img[m
[32m+[m[32m            class="treking-child"[m
[32m+[m[32m            alt=""[m
[32m+[m[32m            src="./public/frame-2610464@2x.png"[m
[32m+[m[32m          />[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="camping">[m
[32m+[m[32m          <img[m
[32m+[m[32m            class="treking-child"[m
[32m+[m[32m            alt=""[m
[32m+[m[32m            src="./public/frame-26104641@2x.png"[m
[32m+[m[32m          />[m
[32m+[m
[32m+[m[32m          <div class="camping-parent">[m
[32m+[m[32m            <b class="conoce-de-nosotros">Camping</b>[m
[32m+[m[32m            <div class="disfruta-de-una1">[m
[32m+[m[32m              Disfruta de una noche bajo las estrellas en un entorno natural[m
[32m+[m[32m              incomparable. Puedes acampar en diversas zonas, desde serenos[m
[32m+[m[32m              bosques hasta majestuosas montañas. Cada lugar ofrece una[m
[32m+[m[32m              experiencia única para conectar con la naturaleza y relajarte bajo[m
[32m+[m[32m              un cielo estrellado.[m
[32m+[m[32m            </div>[m
[32m+[m[32m          </div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="intercambio">[m
[32m+[m[32m          <div class="intercambio-cultural-parent">[m
[32m+[m[32m            <b class="conoce-de-nosotros">Intercambio cultural</b>[m
[32m+[m[32m            <div class="conoce-las-tradiciones">[m
[32m+[m[32m              Conoce las tradiciones y costumbres de las comunidades locales.[m
[32m+[m[32m              Sumérgete en su cultura, disfruta de su gastronomía y participa en[m
[32m+[m[32m              sus festividades. Cada visita es una oportunidad para aprender y[m
[32m+[m[32m              apreciar su forma de vida.[m
[32m+[m[32m            </div>[m
[32m+[m[32m          </div>[m
[32m+[m[32m          <img[m
[32m+[m[32m            class="treking-child"[m
[32m+[m[32m            alt=""[m
[32m+[m[32m            src="./public/frame-26104642@2x.png"[m
[32m+[m[32m          />[m
[32m+[m[32m        </div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="barra">[m
[32m+[m[32m        <img class="escudo-icon" alt="" src="./public/escudo.svg" />[m
[32m+[m
[32m+[m[32m        <div class="turismo-parent">[m
[32m+[m[32m          <div class="turismo">[m
[32m+[m[32m            <b class="cultura">Turismo</b>[m
[32m+[m[32m          </div>[m
[32m+[m[32m          <div class="atractivos">[m
[32m+[m[32m            <b class="cultura">Cultura</b>[m
[32m+[m[32m          </div>[m
[32m+[m[32m          <div class="negocio">[m
[32m+[m[32m            <b class="cultura">Negocio</b>[m
[32m+[m[32m          </div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </div>