// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSittergabc",
    products: [
        .library(name: "TreeSittergabc", targets: ["TreeSittergabc"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSittergabc",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSittergabcTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSittergabc",
            ],
            path: "bindings/swift/TreeSittergabcTests"
        )
    ],
    cLanguageStandard: .c11
)
