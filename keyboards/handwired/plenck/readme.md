# handwired/plenck

![handwired/plenck](imgur.com image replace me!)

_A short description of the keyboard/project_

-   Keyboard Maintainer: [Mads-Bo Lassen](https://github.com/mads-bo)
-   Hardware Supported: _The PCBs, controllers supported_
-   Hardware Availability: _Links to where you can find this hardware_

Make example for this keyboard (after setting up your build environment):

    make handwired/plenck:default

Flashing example for this keyboard:

    make handwired/plenck:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

## Compile firmware

Run the following command in QMK MSYS:

make handwired/plenck:vial -j 10

## Docs

Latest vial docs: https://github.com/vial-kb/vial-qmk/tree/vial/docs

Remember to update forked branch if something does not work.

## OLED

Generate bit image: https://javl.github.io/image2cpp/

https://docs.splitkb.com/hc/en-us/articles/360013811280-How-do-I-convert-an-image-for-use-on-an-OLED-display-

https://github.com/nwii/oledbongocat
