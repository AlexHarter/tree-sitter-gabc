// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGabc",
    products: [
        .library(name: "TreeSitterGabc", targets: ["TreeSitterGabc"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGabc",
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
            name: "TreeSitterGabcTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGabc",
            ],
            path: "bindings/swift/TreeSitterGabcTests"
        )
    ],
    cLanguageStandard: .c11
)
