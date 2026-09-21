---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
File
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## File

Disk file access. `File` requires a real filesystem entry and cannot open assets packed into an exported `resources.pak`; use an engine resource loader for packed read-only resources. `File` inherits the streaming helpers from [**FileData**](../file-data/file-data.md) and adds `open`, `flush`, `close`, plus direct access to the underlying `FILE*` through `getFilePtr`. The CharacterController tutorial uses it to save configs such as `saves/tutorial_slot0.json`.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| `FILE*` | [**fileHandle**](file-file-handle.md) | Underlying C file handle (`protected`). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | [**File**](file-constructor.md). Default constructor. Leaves the handle null until `open` is called. |
| `FILE*` fp | [**File**](file-constructor.md). Wraps an already-open C file pointer. |
| `const char*` aFilename, [**bool**](https://en.cppreference.com/cpp/keyword/bool) write = false | [**File**](file-constructor.md). Opens `aFilename` for reading, or for writing when `write` is `true`. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**File**](file.md)& | [**operator =**](file-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**File**](file.md)& f | Copies the file handle from another `File`. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**~File**](file-destructor.md) |  | Destructor. Closes the handle if one is open. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**eof**](file-eof.md) |  | Whether the end of the file has been reached. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**read**](file-read.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**char**](https://en.cppreference.com/cpp/keyword/char)\* aDst, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) aBytes | Reads up to `aBytes` into `aDst`. Returns bytes actually read. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**write**](file-write.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**char**](https://en.cppreference.com/cpp/keyword/char)\* aSrc, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) aBytes | Writes `aBytes` from `aSrc` and syncs the filesystem. Returns bytes actually written. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**length**](file-length.md) |  | Total file size in bytes. Cursor position is preserved. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**seek**](file-seek.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) aOffset | Moves the cursor to absolute byte offset `aOffset`. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**pos**](file-pos.md) |  | Current cursor position in bytes. |
| `FILE*` | [**getFilePtr**](file-get-file-ptr.md) |  | Returns the underlying C file handle. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**open**](file-open.md) | `const char*` aFilename, [**bool**](https://en.cppreference.com/cpp/keyword/bool) write = false | Opens `aFilename` for reading, or for writing when `write` is `true`. Returns a `FileErrors` code. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**flush**](file-flush.md) |  | Flushes buffered data to disk. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**close**](file-close.md) |  | Closes the file handle. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
