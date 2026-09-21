[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
