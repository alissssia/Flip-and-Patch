# Flipping and Patching - Implementation of hardware techniques for permanent fault tolerance in on-chip memories of CNN accelerators
This repository contains the implementation of two techniques for permanent fault tolerance in on-chip memories of CNN accelerators, addressing faults caused by voltage scaling. 
These mechanisms are described in the paper:
> **"Flip-and-Patch: A Fault-Tolerant Technique for On-Chip Memories of CNN Accelerators at Low Supply Voltage"**

### Citation (BibTeX)
```bibtex
@article{TOCADIAZ2024105023,
title = {Flip-and-Patch: A fault-tolerant technique for on-chip memories of CNN accelerators at low supply voltage},
journal = {Microprocessors and Microsystems},
volume = {106},
pages = {105023},
year = {2024},
issn = {0141-9331},
doi = {https://doi.org/10.1016/j.micpro.2024.105023},
url = {https://www.sciencedirect.com/science/article/pii/S0141933124000188},
author = {Yamilka Toca-Díaz and Reynier {Hernández Palacios} and Rubén {Gran Tejero} and Alejandro Valero}
}


@INPROCEEDINGS{10456839,
  author={Toca-Díaz, Yamilka and Muñoz, Nicolás Landeros and Tejero, Rubén Gran and Valero, Alejandro},
  booktitle={2023 26th Euromicro Conference on Digital System Design (DSD)}, 
  title={On Fault-Tolerant Microarchitectural Techniques for Voltage Underscaling in On-Chip Memories of CNN Accelerators}, 
  year={2023},
  volume={},
  number={},
  pages={138-145},
  keywords={Energy consumption;Low voltage;Microarchitecture;Manufacturing processes;System performance;Memory management;Voltage;Deep learning;energy efficiency;network accuracy;permanent faults},
  doi={10.1109/DSD60849.2023.00029}}
```


# Project organization
## Implementation
This directory contains different directories with each feature necessary to make the techniques work.
### mecanismo_flipping
Contains the implementation of the flipping mechanism, which can be used:

- With a single activation,

- With a block of N activations or

- With flip-flops before and after the mechanism.

The directory also includes different flip-flop implementations, a multiplexer and dedicated testbenches (with a Makefile to execute all of them).
### cache
Implements the cache required for the patching mechanism.
Includes all necessary modules, a C++ testbench to verify correct functionality and a corresponding Makefile for the testbench execution.


