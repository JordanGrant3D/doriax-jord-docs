---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Animation
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Animation](animation.md).getActionFrameSize()

Returns the number of frames currently in the timeline. A CharacterController building a procedural sequence checks it to confirm every step was scheduled before calling `start`.

```cpp
size_t getActionFrameSize() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-get-action-frame-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-get-action-frame-size.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
