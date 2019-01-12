# NextionBasic

A Particle library for Nextion Nextion displays. This library is desined for the use-case where you only want to receive touch events from the display, with all program logic executed on the particle MCU. This library does not handle receiving any other data from the display. This library also does not handle sending data / commands to the display, however this can be simply achived by issuing commands from the standard Nextion instruction set via Serial.print(). 

This library is based off the original Nextion Arduino Library (ITEADLIB_Arduino_Nextion) but uses the SerialBufferRK library to more reliably monitor the serial port, preventing missed touch events as I frequently experienced using the original Library

## Usage

See the [examples](examples) folder for more details.

## Documentation

TODO: Describe `NextionBasic`

## Contributing

Here's how you can make changes to this library and eventually contribute those changes back.

To get started, [clone the library from GitHub to your local machine](https://help.github.com/articles/cloning-a-repository/).

Change the name of the library in `library.properties` to something different. You can add your name at then end.

Modify the sources in <src> and <examples> with the new behavior.

To compile an example, use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use our [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

After your changes are done you can upload them with `particle library upload` or `Upload` command in the IDE. This will create a private (only visible by you) library that you can use in other projects. Do `particle library add NextionBasic_myname` to add the library to a project on your machine or add the NextionBasic_myname library to a project on the Web IDE or Desktop IDE.

At this point, you can create a [GitHub pull request](https://help.github.com/articles/about-pull-requests/) with your changes to the original library. 

If you wish to make your library public, use `particle library publish` or `Publish` command.

## LICENSE
Copyright 2019 Scott Ryburn

Licensed under the MIT license
