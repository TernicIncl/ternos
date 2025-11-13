# TernOS Commit Convention

To keep our Git history clean and meaningful, all commit messages must start with a **commit letter** — a single capital letter that describes the nature of the change.

This helps contributors and reviewers quickly understand what each commit does at a glance.

---

## Commit Letters

| Letter | Meaning | Example |
|:-------|:---------|:--------|
| **A** | Added | `A: Added new memory management module` |
| **C** | Changed / Updated | `C: Changed kernel logging format for clarity` |
| **R** | Removed | `R: Removed legacy framebuffer code` |
| **F** | Fixed | `F: Fixed null pointer bug in process scheduler` |
| **D** | Documented | `D: Documented bootloader initialization steps` |
| **M** | Merged | `M: Merged feature/input-handling into main` |
| **T** | Tested | `T: Tested new filesystem layer under VM` |
| **S** | Security | `S: Improved kernel privilege isolation` |
| **B** | Build / CI | `B: Updated Jam build configuration` |
| **P** | Performance | `P: Optimized context switching routine` |
| **X** | Experimental | `X: Prototype GUI compositor (unstable)` |

---

## Examples

A: Added initial kernel task scheduler
F: Fixed stack overflow in memory allocator
C: Changed boot sequence for faster startup
R: Removed deprecated syscall interface
P: Optimized rendering loop for better FPS

---

## Tips

- Keep commit messages **clear, concise, and descriptive.**  
- Group related changes logically — avoid “mixed” commits (e.g., adding and removing unrelated things).  
- Use `C:` for refactors, style adjustments, or general improvements.  
- If multiple letters apply, use the **most significant one** (e.g., if you “added and tested” → `A:`).