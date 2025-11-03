# Flipping and Patching - Implementation of hardware techniques for permanent fault tolerance in on-chip memories of CNN accelerators
This repository contains the implementation of two techniques for permanent fault tolerance in on-chip memories of CNN accelerators, addressing faults caused by voltage scaling. 
These mechanisms are described in the paper:
> **"Flip-and-Patch: A Fault-Tolerant Technique for On-Chip Memories of CNN Accelerators at Low Supply Voltage"**

### 📚 Citation (BibTeX)
```bibtex
@article{Toca-Díaz:131704,
      author        = "Toca-Díaz, Yamilka and Hernández Palacios, Reynier and
                       Gran Tejero, Rubén and Valero, Alejandro",
      title         = "{Flip-and-Patch: A Fault-Tolerant Technique for On-Chip
                       Memories of CNN Accelerators at Low Supply Voltage}",
      year          = "2024",
}
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
Includes all necessary modules, a C++ testbench to verify correct functionality, and a corresponding Makefile for the testbench execution.


