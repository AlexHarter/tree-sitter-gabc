import XCTest
import SwiftTreeSitter
import TreeSitterGabc

final class TreeSitterGabcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gabc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Gabc grammar")
    }
}
