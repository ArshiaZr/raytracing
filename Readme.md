# Ray Tracing Study Repository

This repository is created solely for studying purposes. It is based on the concepts and papers from [raytracing.github.io](https://raytracing.github.io/).

## Project Overview

This project aims to implement various aspects of ray tracing based on the materials available at [raytracing.github.io](https://raytracing.github.io/). Currently, the implemented features include:

- Hittable objects: Objects that rays can intersect with for rendering.
- Camera object: Used for capturing scenes.
- World structure: Contains hittable objects, currently represented as spheres.
- Sphere object: A basic implementation for use in the ray tracing process.

## Usage

### Compiling the Code

To compile the code, you can use the provided Makefile. Simply run the following command in your terminal:

```bash
make
```

This will compile the code and generate the executable.

### Running the Program

After compiling, you can run the program by executing the generated executable. Use the following command:

```bash
./raytracer > image.ppm
```

This will run the ray tracing program and generate the output image.

## Acknowledgements

The implementation of this repository is heavily inspired by the resources available at [raytracing.github.io](https://raytracing.github.io/). Their papers and documentation have been instrumental in understanding the fundamentals of ray tracing.
