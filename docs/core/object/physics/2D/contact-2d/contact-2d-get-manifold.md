---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Contact2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact2D](contact-2d.md).getManifold()

Decoded manifold for this contact: points, impulses and normal. The CharacterController reads it to tell floors from walls.

```cpp
Manifold2D getManifold() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-manifold.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-manifold.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
